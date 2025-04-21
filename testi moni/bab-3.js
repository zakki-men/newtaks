const love = document.getElementById('love');

love.addEventListener('click', () => {
    love.classList.add('exploded'); // Tambahkan kelas 'exploded'

    // Reset animasi setelah selesai
    love.addEventListener('animationend', () => {
        love.classList.remove('exploded');
    }, { once: true }); // 'once: true' memastikan event listener hanya dijalankan sekali
});