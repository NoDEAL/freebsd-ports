--- headless/lib/browser/headless_browser_main_parts.h.orig	2022-10-01 07:40:07 UTC
+++ headless/lib/browser/headless_browser_main_parts.h
@@ -48,7 +48,7 @@ class HEADLESS_EXPORT HeadlessBrowserMainParts
 #if BUILDFLAG(IS_MAC)
   void PreCreateMainMessageLoop() override;
 #endif
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   void PostCreateMainMessageLoop() override;
 #endif
   void QuitMainMessageLoop();
