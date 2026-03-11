document.addEventListener("DOMContentLoaded", function () {
  // Thiết lập Three.js
  var scene = new THREE.Scene();
  var camera = new THREE.PerspectiveCamera(
    75,
    window.innerWidth / window.innerHeight,
    0.1,
    1000
  );
  var renderer = new THREE.WebGLRenderer({ antialias: true });
  renderer.setSize(window.innerWidth, window.innerHeight);
  renderer.setClearColor(0x7bb661); // Màu nền
  document.getElementById("container").appendChild(renderer.domElement);

  // Tạo quả bóng đá
  var loader = new THREE.TextureLoader();
  loader.load(
    "https://threejsfundamentals.org/threejs/resources/images/wall.jpg",
    function (texture) {
      var geometry = new THREE.SphereGeometry(1, 32, 32);
      var material = new THREE.MeshBasicMaterial({ map: texture });
      var football = new THREE.Mesh(geometry, material);
      scene.add(football);

      // Tạo particles
      var particlesGeometry = new THREE.BufferGeometry();
      var particlesCount = 1000;
      var posArray = new Float32Array(particlesCount * 3);

      for (var i = 0; i < particlesCount * 3; i++) {
        posArray[i] = (Math.random() - 0.5) * 20;
      }

      particlesGeometry.setAttribute(
        "position",
        new THREE.BufferAttribute(posArray, 3)
      );

      var particlesMaterial = new THREE.PointsMaterial({
        size: 0.05,
        color: 0xffffff,
      });

      var particles = new THREE.Points(particlesGeometry, particlesMaterial);
      scene.add(particles);

      camera.position.z = 5;

      var animate = function () {
        requestAnimationFrame(animate);

        football.rotation.x += 0.01;
        football.rotation.y += 0.01;

        particles.rotation.y += 0.001;

        renderer.render(scene, camera);
      };

      animate();
    }
  );

  // Điều chỉnh lại kích thước khi thay đổi kích thước cửa sổ
  window.addEventListener("resize", function () {
    camera.aspect = window.innerWidth / window.innerHeight;
    camera.updateProjectionMatrix();
    renderer.setSize(window.innerWidth, window.innerHeight);
  });
});
