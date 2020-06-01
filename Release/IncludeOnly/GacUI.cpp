﻿/***********************************************************************
THIS FILE IS AUTOMATICALLY GENERATED. DO NOT MODIFY
DEVELOPER: Zihan Chen(vczh)
***********************************************************************/
#include "GacUI.h"
#ifndef VCZH_DEBUG_NO_REFLECTION
#include "GacUIReflection.h"
#endif

#include "..\..\Source\GacUIReflectionHelper.cpp"
#include "..\..\Source\Controls\GuiApplication.cpp"
#include "..\..\Source\Controls\GuiBasicControls.cpp"
#include "..\..\Source\Controls\GuiButtonControls.cpp"
#include "..\..\Source\Controls\GuiContainerControls.cpp"
#include "..\..\Source\Controls\GuiDateTimeControls.cpp"
#include "..\..\Source\Controls\GuiDialogs.cpp"
#include "..\..\Source\Controls\GuiLabelControls.cpp"
#include "..\..\Source\Controls\GuiScrollControls.cpp"
#include "..\..\Source\Controls\GuiWindowControls.cpp"
#include "..\..\Source\Controls\ListControlPackage\GuiBindableDataGrid.cpp"
#include "..\..\Source\Controls\ListControlPackage\GuiBindableListControls.cpp"
#include "..\..\Source\Controls\ListControlPackage\GuiComboControls.cpp"
#include "..\..\Source\Controls\ListControlPackage\GuiDataGridControls.cpp"
#include "..\..\Source\Controls\ListControlPackage\GuiDataGridExtensions.cpp"
#include "..\..\Source\Controls\ListControlPackage\GuiListControlItemArrangers.cpp"
#include "..\..\Source\Controls\ListControlPackage\GuiListControls.cpp"
#include "..\..\Source\Controls\ListControlPackage\GuiListViewControls.cpp"
#include "..\..\Source\Controls\ListControlPackage\GuiListViewItemTemplates.cpp"
#include "..\..\Source\Controls\ListControlPackage\GuiTextListControls.cpp"
#include "..\..\Source\Controls\ListControlPackage\GuiTreeViewControls.cpp"
#include "..\..\Source\Controls\Templates\GuiAnimation.cpp"
#include "..\..\Source\Controls\Templates\GuiCommonTemplates.cpp"
#include "..\..\Source\Controls\Templates\GuiControlShared.cpp"
#include "..\..\Source\Controls\Templates\GuiControlTemplates.cpp"
#include "..\..\Source\Controls\Templates\GuiThemeStyleFactory.cpp"
#include "..\..\Source\Controls\TextEditorPackage\GuiDocumentViewer.cpp"
#include "..\..\Source\Controls\TextEditorPackage\GuiTextCommonInterface.cpp"
#include "..\..\Source\Controls\TextEditorPackage\GuiTextControls.cpp"
#include "..\..\Source\Controls\TextEditorPackage\EditorCallback\GuiTextAutoComplete.cpp"
#include "..\..\Source\Controls\TextEditorPackage\EditorCallback\GuiTextColorizer.cpp"
#include "..\..\Source\Controls\TextEditorPackage\EditorCallback\GuiTextUndoRedo.cpp"
#include "..\..\Source\Controls\TextEditorPackage\LanguageService\GuiLanguageAutoComplete.cpp"
#include "..\..\Source\Controls\TextEditorPackage\LanguageService\GuiLanguageColorizer.cpp"
#include "..\..\Source\Controls\TextEditorPackage\LanguageService\GuiLanguageOperations.cpp"
#include "..\..\Source\Controls\ToolstripPackage\GuiMenuControls.cpp"
#include "..\..\Source\Controls\ToolstripPackage\GuiRibbonControls.cpp"
#include "..\..\Source\Controls\ToolstripPackage\GuiRibbonGalleryList.cpp"
#include "..\..\Source\Controls\ToolstripPackage\GuiRibbonImpl.cpp"
#include "..\..\Source\Controls\ToolstripPackage\GuiToolstripCommand.cpp"
#include "..\..\Source\Controls\ToolstripPackage\GuiToolstripMenu.cpp"
#include "..\..\Source\GraphicsComposition\GuiGraphicsAxis.cpp"
#include "..\..\Source\GraphicsComposition\GuiGraphicsBasicComposition.cpp"
#include "..\..\Source\GraphicsComposition\GuiGraphicsCompositionBase.cpp"
#include "..\..\Source\GraphicsComposition\GuiGraphicsEventReceiver.cpp"
#include "..\..\Source\GraphicsComposition\GuiGraphicsFlowComposition.cpp"
#include "..\..\Source\GraphicsComposition\GuiGraphicsRepeatComposition.cpp"
#include "..\..\Source\GraphicsComposition\GuiGraphicsResponsiveComposition.cpp"
#include "..\..\Source\GraphicsComposition\GuiGraphicsSharedSizeComposition.cpp"
#include "..\..\Source\GraphicsComposition\GuiGraphicsSpecializedComposition.cpp"
#include "..\..\Source\GraphicsComposition\GuiGraphicsStackComposition.cpp"
#include "..\..\Source\GraphicsComposition\GuiGraphicsTableComposition.cpp"
#include "..\..\Source\GraphicsElement\GuiGraphicsDocumentElement.cpp"
#include "..\..\Source\GraphicsElement\GuiGraphicsElement.cpp"
#include "..\..\Source\GraphicsElement\GuiGraphicsResourceManager.cpp"
#include "..\..\Source\GraphicsElement\GuiGraphicsTextElement.cpp"
#include "..\..\Source\GraphicsHost\GuiGraphicsHost.cpp"
#include "..\..\Source\GraphicsHost\GuiGraphicsHost_Alt.cpp"
#include "..\..\Source\GraphicsHost\GuiGraphicsHost_ShortcutKey.cpp"
#include "..\..\Source\GraphicsHost\GuiGraphicsHost_Tab.cpp"
#include "..\..\Source\NativeWindow\GuiNativeWindow.cpp"
#include "..\..\Source\Resources\GuiDocument.cpp"
#include "..\..\Source\Resources\GuiDocumentClipboard_Document.cpp"
#include "..\..\Source\Resources\GuiDocumentClipboard_HtmlFormat.cpp"
#include "..\..\Source\Resources\GuiDocumentClipboard_RichTextFormat.cpp"
#include "..\..\Source\Resources\GuiDocumentEditor_AddContainer.cpp"
#include "..\..\Source\Resources\GuiDocumentEditor_ClearUnnecessaryRun.cpp"
#include "..\..\Source\Resources\GuiDocumentEditor_CloneRun.cpp"
#include "..\..\Source\Resources\GuiDocumentEditor_CollectStyle.cpp"
#include "..\..\Source\Resources\GuiDocumentEditor_CutRun.cpp"
#include "..\..\Source\Resources\GuiDocumentEditor_GetRunRange.cpp"
#include "..\..\Source\Resources\GuiDocumentEditor_LocaleHyperlink.cpp"
#include "..\..\Source\Resources\GuiDocumentEditor_LocaleStyle.cpp"
#include "..\..\Source\Resources\GuiDocumentEditor_RemoveContainer.cpp"
#include "..\..\Source\Resources\GuiDocumentEditor_RemoveRun.cpp"
#include "..\..\Source\Resources\GuiDocumentEditor_ReplaceStyleName.cpp"
#include "..\..\Source\Resources\GuiDocumentEditor_SummerizeStyle.cpp"
#include "..\..\Source\Resources\GuiDocument_Edit.cpp"
#include "..\..\Source\Resources\GuiDocument_Load.cpp"
#include "..\..\Source\Resources\GuiDocument_Save.cpp"
#include "..\..\Source\Resources\GuiParserManager.cpp"
#include "..\..\Source\Resources\GuiResource.cpp"
#include "..\..\Source\Resources\GuiResourceManager.cpp"
#include "..\..\Source\Resources\GuiResourceTypeResolvers.cpp"
