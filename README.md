BA DISTRO
==
Distribución Drupal gratuita de la Dirección General de Gobierno Electrónico

Desarrollamos BAdistro, un perfil de instalación de Drupal compuesto por un conjunto de módulos para instalar y configurar de forma pre-determinada con la finalidad de que todos los gobiernos tengan acceso a las funcionalidades más importantes de una web gubernamental. 

Basada en nuestra experiencia con el sitio web buenosaires.gob.ar, la interacción con los ciudadanos y las necesidades de las diferentes áreas de gobierno, nace nuestra intención de contribuir a la comunidad Drupal con la experiencia de nuestro equipo y a los gobiernos que decidan sumarse a la experiencia de desarrollar su sitio web en una plataforma colaborativa y de administración descentralizada.

BAdistro 1.0 contiene:

* Layout responsive: Diseño adaptable a todo tipo de dispositivo
* Carrousel: Permite filtrar por tipo de contenidos a mostrar, elegir la cantidad de items a presentar y a su vez, por categoría de noticias o tipo de trámite
Alerta: Permite elegir el tipo de alerta (success, danger, warning, info) y personalizar el texto a mostrar (admite full html)
* Shortcut o Atajo: Permite elegir icono, color, título, un texto breve y dónde enlaza
* Listado: Este es el bloque fuerte (la base de la distro), permite elegir un título, el tipo de contenido a mostrar y a su vez filtrarlo por categoría o tipo. Elegir entre 3 formatos de estilo diferentes y su orientación: horizontal o vertical. Además, tiene 2 funcionamientos dinámicos: recientes o relacionados
Recientes lista los items de manera temporal mientras que relacionados combina las otras configuraciones del bloque:
Si el tipo de contenido es Noticia y el listado se muestra en un Área, muestra las noticias relacionadas al área.
Si el tipo de contenido es Área y el listado se muestra en un Área, muestra las subáreas.
Si el tipo de contenido es Noticia y el listado se muestra en una Noticia, muestra noticias de la misma categoría que la noticia original.
* Campo: Permite elegir distintos tipos de campos a mostrar de un contenido determinado
* Redes Sociales: Integra timelines de Facebook o Twitter y agrega links de compartir
* Imagen destacada: Levanta el campo imagen destacada
* Galería de imágenes: Levanta el campo Imágenes de un contenido determinado. Las renderiza en una galería tipo modal (o lightbox)
* Texto: Muestra el texto (campo body) de un contenido o permite mostrar un texto personalizado
* Título: Muestra el texto (campo title) de un contenido o permite mostrar un título personalizado. Además da la opción de elegir el tag entre h1 a h6
* 

REQUISITOS
==
Un servidor con:
Apache (http://www.apache.org/dyn/closer.cgi)
MySQL (https://www.mysql.com/downloads/)
PHP (http://www.php.net/downloads)
Drush (https://www.drupal.org/project/drush)

INSTALACIÓN
==
Dentro de la carpeta que se crea ejecutar:
sh scripts/build.sh <path/al/sitio/nombreDelSitio>

Luego desde el browser entrar a path/al/sitio/nombreDelSitio y seguir los pasos de la instalación de Drupal
