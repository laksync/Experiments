fetch("http://localhost:8000/batches")
    .then(response => response.json())
    .then(data => {

        const container = document.getElementById("batches");

        data.forEach(batch => {
            container.innerHTML += `
                <p>
                    ${batch.name} - ${batch.students} students
                </p>
            `;
        });

    });