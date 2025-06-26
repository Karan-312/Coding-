document.addEventListener('scroll', () => {
    const boxes = document.querySelectorAll('.info-box');
    const triggerBottom = window.innerHeight / 5 * 4; // Trigger point

    boxes.forEach(box => {
        const boxTop = box.getBoundingClientRect().top;

        if (boxTop < triggerBottom) {
            box.classList.add('visible'); // Add class to make visible
        }
    });
});
