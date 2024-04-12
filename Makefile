#############################################################################
# Makefile for building: shangtang
# Generated by qmake (3.1) (Qt 5.14.2)
# Project:  shangtang.pro
# Template: app
# Command: D:\software\Qt5.14.2\5.14.2\msvc2017_64\bin\qmake.exe -o Makefile shangtang.pro -spec win32-msvc "CONFIG+=qtquickcompiler"
#############################################################################

MAKEFILE      = Makefile

EQ            = =

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = D:\software\Qt5.14.2\5.14.2\msvc2017_64\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
QINSTALL      = D:\software\Qt5.14.2\5.14.2\msvc2017_64\bin\qmake.exe -install qinstall
QINSTALL_PROGRAM = D:\software\Qt5.14.2\5.14.2\msvc2017_64\bin\qmake.exe -install qinstall -exe
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
IDC           = idc
IDL           = midl
ZIP           = zip -r -9
DEF_FILE      = 
RES_FILE      = 
SED           = $(QMAKE) -install sed
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: $(MAKEFILE) FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: $(MAKEFILE) FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: shangtang.pro D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\win32-msvc\qmake.conf D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\spec_pre.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\common\angle.conf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\common\windows-desktop.conf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\win32\windows_vulkan_sdk.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\common\windows-vulkan.conf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\common\msvc-desktop.conf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\qconfig.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3danimation.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3danimation_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dcore.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dcore_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dextras.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dextras_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dinput.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dinput_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dlogic.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dlogic_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquick.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquick_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickanimation.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickanimation_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickextras.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickextras_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickinput.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickinput_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickrender.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickrender_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickscene2d.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickscene2d_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3drender.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3drender_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_accessibility_support_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_axbase.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_axbase_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_axcontainer.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_axcontainer_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_axserver.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_axserver_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_bluetooth.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_bluetooth_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_bootstrap_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_concurrent.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_concurrent_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_core.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_core_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_dbus.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_dbus_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_designer.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_designer_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_designercomponents_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_devicediscovery_support_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_edid_support_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_egl_support_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_eventdispatcher_support_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_fb_support_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_fontdatabase_support_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_gamepad.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_gamepad_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_gui.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_gui_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_help.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_help_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_location.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_location_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_multimedia.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_multimedia_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_multimediawidgets.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_multimediawidgets_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_network.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_network_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_nfc.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_nfc_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_opengl.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_opengl_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_openglextensions.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_openglextensions_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_packetprotocol_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_platformcompositor_support_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_positioning.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_positioning_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_positioningquick.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_positioningquick_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_printsupport.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_printsupport_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qml.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qml_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmldebug_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmldevtools_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmlmodels.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmlmodels_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmltest.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmltest_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmlworkerscript.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmlworkerscript_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quick.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quick_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quickcontrols2.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quickcontrols2_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quickparticles_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quickshapes_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quicktemplates2.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quicktemplates2_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quickwidgets.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quickwidgets_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_remoteobjects.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_remoteobjects_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_repparser.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_repparser_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_scxml.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_scxml_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_sensors.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_sensors_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_serialbus.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_serialbus_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_serialport.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_serialport_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_sql.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_sql_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_svg.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_svg_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_testlib.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_testlib_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_texttospeech.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_texttospeech_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_theme_support_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_uiplugin.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_uitools.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_uitools_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_vulkan_support_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_webchannel.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_webchannel_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_websockets.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_websockets_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_webview.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_webview_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_widgets.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_widgets_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_windowsuiautomation_support_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_winextras.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_winextras_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_xml.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_xml_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_xmlpatterns.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_xmlpatterns_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_zlib_private.pri \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\qt_functions.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\qt_config.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\win32-msvc\qmake.conf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\spec_post.prf \
		.qmake.stash \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\exclusive_builds.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\common\msvc-version.conf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\toolchain.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\default_pre.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\win32\default_pre.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\resolve_config.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\exclusive_builds_post.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\default_post.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\resources_functions.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\qtquickcompiler.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\precompile_header.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\warn_on.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\qt.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\resources.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\moc.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\win32\opengl.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\uic.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\qmake_use.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\file_copies.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\win32\windows.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\testcase_targets.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\exceptions.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\yacc.prf \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\lex.prf \
		shangtang.pro \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5MultimediaWidgets.prl \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Multimedia.prl \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Widgets.prl \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Gui.prl \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Network.prl \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Core.prl \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\qtmain.prl \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\build_pass.prf \
		resource.qrc \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5MultimediaWidgetsd.prl \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Multimediad.prl \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Widgetsd.prl \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Guid.prl \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Networkd.prl \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Cored.prl \
		D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\qtmaind.prl
	$(QMAKE) -o Makefile shangtang.pro -spec win32-msvc "CONFIG+=qtquickcompiler"
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\spec_pre.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\common\angle.conf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\common\windows-desktop.conf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\win32\windows_vulkan_sdk.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\common\windows-vulkan.conf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\common\msvc-desktop.conf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\qconfig.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3danimation.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3danimation_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dcore.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dcore_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dextras.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dextras_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dinput.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dinput_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dlogic.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dlogic_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquick.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquick_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickanimation.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickanimation_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickextras.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickextras_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickinput.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickinput_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickrender.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickrender_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickscene2d.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3dquickscene2d_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3drender.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_3drender_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_accessibility_support_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_axbase.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_axbase_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_axcontainer.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_axcontainer_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_axserver.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_axserver_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_bluetooth.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_bluetooth_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_bootstrap_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_concurrent.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_concurrent_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_core.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_core_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_dbus.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_dbus_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_designer.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_designer_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_designercomponents_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_devicediscovery_support_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_edid_support_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_egl_support_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_eventdispatcher_support_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_fb_support_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_fontdatabase_support_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_gamepad.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_gamepad_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_gui.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_gui_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_help.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_help_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_location.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_location_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_multimedia.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_multimedia_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_multimediawidgets.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_multimediawidgets_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_network.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_network_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_nfc.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_nfc_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_opengl.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_opengl_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_openglextensions.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_openglextensions_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_packetprotocol_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_platformcompositor_support_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_positioning.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_positioning_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_positioningquick.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_positioningquick_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_printsupport.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_printsupport_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qml.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qml_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmldebug_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmldevtools_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmlmodels.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmlmodels_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmltest.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmltest_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmlworkerscript.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qmlworkerscript_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quick.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quick_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quickcontrols2.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quickcontrols2_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quickparticles_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quickshapes_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quicktemplates2.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quicktemplates2_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quickwidgets.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_quickwidgets_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_remoteobjects.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_remoteobjects_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_repparser.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_repparser_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_scxml.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_scxml_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_sensors.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_sensors_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_serialbus.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_serialbus_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_serialport.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_serialport_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_sql.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_sql_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_svg.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_svg_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_testlib.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_testlib_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_texttospeech.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_texttospeech_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_theme_support_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_uiplugin.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_uitools.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_uitools_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_vulkan_support_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_webchannel.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_webchannel_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_websockets.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_websockets_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_webview.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_webview_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_widgets.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_widgets_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_windowsuiautomation_support_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_winextras.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_winextras_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_xml.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_xml_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_xmlpatterns.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_xmlpatterns_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\modules\qt_lib_zlib_private.pri:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\qt_functions.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\qt_config.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\win32-msvc\qmake.conf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\spec_post.prf:
.qmake.stash:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\exclusive_builds.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\common\msvc-version.conf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\toolchain.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\default_pre.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\win32\default_pre.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\resolve_config.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\exclusive_builds_post.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\default_post.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\resources_functions.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\qtquickcompiler.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\precompile_header.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\warn_on.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\qt.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\resources.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\moc.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\win32\opengl.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\uic.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\qmake_use.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\file_copies.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\win32\windows.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\testcase_targets.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\exceptions.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\yacc.prf:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\lex.prf:
shangtang.pro:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5MultimediaWidgets.prl:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Multimedia.prl:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Widgets.prl:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Gui.prl:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Network.prl:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Core.prl:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\qtmain.prl:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\mkspecs\features\build_pass.prf:
resource.qrc:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5MultimediaWidgetsd.prl:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Multimediad.prl:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Widgetsd.prl:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Guid.prl:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Networkd.prl:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\Qt5Cored.prl:
D:\software\Qt5.14.2\5.14.2\msvc2017_64\lib\qtmaind.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile shangtang.pro -spec win32-msvc "CONFIG+=qtquickcompiler"

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

release-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile