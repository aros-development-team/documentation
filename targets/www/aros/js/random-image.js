function getRandomImage() {
    const images = [
        "/images/thumbs/arosthumb1.jpg",
        "/images/thumbs/arosthumb2.png",
        "/images/thumbs/arosthumb3.jpg",
        "/images/thumbs/arosthumb4.jpg",
        "/images/thumbs/arosthumb5.jpg",
        "/images/thumbs/arosthumb6.jpg",
        "/images/thumbs/arosthumb7.jpg"
    ];
    const randomIndex = Math.floor(Math.random() * images.length);
    return images[randomIndex];
}

document.addEventListener("DOMContentLoaded", function() {
    const img = document.createElement("img");
    img.src = getRandomImage();
    img.alt = "thumbnail";
    img.width = 100;
    img.height = 76;
    img.style.float = "right";
    img.style.marginLeft = "1em";
    const textElement = document.querySelector("h1 + p"); // Select the paragraph after the heading
    if (textElement) {
        textElement.parentNode.insertBefore(img, textElement);
    }
});
