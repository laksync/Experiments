const {app, BrowserWindow}=require('electron');
const path=require('path');
function createMainWindow(){
    const mainWindow=new BrowserWindow({
        title:"Image Resizer", 
        width:500, 
        height:600

    });
    mainWindow.loadFile(path.join(__dirname, './public/index.html'));
}
app.whenReady().then(() => {
    createMainWindow();
})
app.on('window-all-closed', () => {
  if (process.platform !== 'darwin') {
    app.quit()
  }
})