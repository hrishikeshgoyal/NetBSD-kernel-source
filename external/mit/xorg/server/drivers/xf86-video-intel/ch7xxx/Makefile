#	$NetBSD: Makefile,v 1.3 2010/05/23 01:59:13 mrg Exp $

DRIVER=		xf86-video-intel
DRIVER_NAME=	ch7xxx_drv


SRCS=		ch7xxx_module.c ch7xxx.c

CPPFLAGS+=      -I${DESTDIR}${X11INCDIR}/X11
CPPFLAGS+=      -I${DESTDIR}${X11INCDIR}/X11/dri

.include "../../Makefile.xf86-driver"
.PATH: ${X11SRCDIR.${DRIVER}}/src/ch7xxx
