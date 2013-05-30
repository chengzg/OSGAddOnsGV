/** Auto-generated temporary file for header containment. */
#include <PreBoostPython.h>
#include <pypp_aliases.h>
#include <SystemWrappers.h>
#include <OSGImageFileHandler.h>
#include <OSGImageFileType.h>
#include <OSGSceneFileHandler.h>
#include <OSGSceneFileType.h>
#include <OSGGraphOpSeq.h>
#include <OSGCylinderVolume.h>
#include <OSGVolumeDraw.h>
#include <OSGState.h>
#include <OSGBackground.h>
#include <OSGLightEnv.h>
#include <OSGGraphOpFactory.h>
#include <OSGGraphOp.h>
#include <OSGGraphOpSeq.h>
#include <OSGShaderCache.h>
#include <OSGTraversalValidator.h>
#include <OSGRenderTreeNodePool.h>
#include <OSGRenderPartition.h>
#include <OSGTreeBuilderBase.h>
#include <OSGRenderAction.h>
#include <OSGIntersectAction.h>
#include <OSGStateOverride.h>
#include <OSGStringAttributeMap.h>
#include <OSGIntersectProxyAttachment.h>
#include <OSGBoostPathAttachment.h>
#include <OSGContainerCollection.h>
#include <OSGFileContextAttachment.h>
#include <OSGImage.h>
#include <OSGGeoReferenceAttachment.h>
#include <OSGMultiPassMaterial.h>
#include <OSGChunkMaterial.h>
#include <OSGCompositeMaterial.h>
#include <OSGPrimeMaterial.h>
#include <OSGSwitchMaterial.h>
#include <OSGSimpleMaterial.h>
#include <OSGMaterial.h>
#include <OSGVariantMaterial.h>
#include <OSGMaterialDrawable.h>
#include <OSGDrawableStatsAttachment.h>
#include <OSGStatsAttachment.h>
#include <OSGDrawable.h>
#include <OSGGroup.h>
#include <OSGChunkOverrideGroup.h>
#include <OSGMultiCore.h>
#include <OSGLightEnv.h>
#include <OSGLight.h>
#include <OSGRootGroup.h>
#include <OSGLightEngine.h>
#include <OSGMaterialGroup.h>
#include <OSGGeoVectorProperty.h>
#include <OSGGeoProperty.h>
#include <OSGTextureBaseChunk.h>
#include <OSGColorMaskChunk.h>
#include <OSGState.h>
#include <OSGDepthChunk.h>
#include <OSGBlendChunk.h>
#include <OSGPolygonChunk.h>
#include <OSGChunkListHelper.h>
#include <OSGStateChunk.h>
#include <OSGTextureObjChunk.h>
#include <OSGLightChunk.h>
#include <OSGChunkBlock.h>
#include <OSGMaterialChunk.h>
#include <OSGFullStateChunk.h>
#include <OSGShaderProgramVariables.h>
#include <OSGShaderVariable.h>
#include <OSGShaderProgram.h>
#include <OSGShaderExecutableChunk.h>
#include <OSGShaderExecutableVarChunk.h>
#include <OSGShaderProgramVariableChunk.h>
#include <OSGShaderProgramChunk.h>
#include <OSGSimpleSHLChunk.h>
#include <OSGSimpleSHLVariableChunk.h>
#include <OSGShaderVariableReal.h>
#include <OSGShaderVariableMUInt.h>
#include <OSGShaderVariableMVec4f.h>
#include <OSGShaderVariablePnt3f.h>
#include <OSGShaderVariableVec2f.h>
#include <OSGShaderVariableMVec3f.h>
#include <OSGShaderVariableInt.h>
#include <OSGShaderVariableString.h>
#include <OSGShaderVariableBool.h>
#include <OSGShaderVariableMInt.h>
#include <OSGShaderVariableMatrix.h>
#include <OSGShaderVariableUInt.h>
#include <OSGShaderValueVariable.h>
#include <OSGShaderVariableVec4f.h>
#include <OSGShaderVariableMVec2f.h>
#include <OSGShaderProcVariable.h>
#include <OSGShaderVariableOSG.h>
#include <OSGShaderVariableMMatrix.h>
#include <OSGShaderVariablePnt2f.h>
#include <OSGShaderVariableFunctor.h>
#include <OSGShaderVariableMReal.h>
#include <OSGShaderVariableVec3f.h>
#include <OSGStatisticsForeground.h>
#include <OSGRenderOptions.h>
#include <OSGCamera.h>
#include <OSGViewarea.h>
#include <OSGBackground.h>
#include <OSGMatrixCamera.h>
#include <OSGPerspectiveCamera.h>
#include <OSGSolidBackground.h>
#include <OSGForeground.h>
#include <OSGViewport.h>
#include <OSGStereoCameraDecorator.h>
#include <OSGWindow.h>
#include <OSGFBOViewport.h>
#include <OSGRenderBuffer.h>
#include <OSGFrameBufferObject.h>
#include <OSGLayeredTextureBuffer.h>
#include <OSGTextureBuffer.h>
#include <OSGFrameBufferAttachment.h>

#if defined(Bool)
#undef Bool
#endif

/** Autogenerated temporary file for template instantiation. */

            typedef OSG::GraphOpFactory alias_GraphOpFactory;
            inline unsigned __instantiate_alias_GraphOpFactory()
            { return unsigned(sizeof(alias_GraphOpFactory)); }
         
            typedef OSG::SceneFileHandler alias_SceneFileHandler;
            inline unsigned __instantiate_alias_SceneFileHandler()
            { return unsigned(sizeof(alias_SceneFileHandler)); }
         
            typedef OSG::ImageFileHandler alias_ImageFileHandler;
            inline unsigned __instantiate_alias_ImageFileHandler()
            { return unsigned(sizeof(alias_ImageFileHandler)); }
         
            typedef OSG::RenderTreeNodePool alias_RenderTreeNodePool;
            inline unsigned __instantiate_alias_RenderTreeNodePool()
            { return unsigned(sizeof(alias_RenderTreeNodePool)); }
         
            typedef OSG::StateOverridePool alias_StateOverridePool;
            inline unsigned __instantiate_alias_StateOverridePool()
            { return unsigned(sizeof(alias_StateOverridePool)); }
         

// Member template instantiations
#if defined(__GCCXML__)
template bool OSG::ShaderProgram::addUniformVariable(const OSG::Char8*, const bool&);
template bool OSG::ShaderProgram::addUniformVariable(const OSG::Char8*, const OSG::Int32&);
template bool OSG::ShaderProgram::addUniformVariable(const OSG::Char8*, const OSG::Real32&);
template bool OSG::ShaderProgram::addUniformVariable(const OSG::Char8*, const OSG::Vec2f&);
template bool OSG::ShaderProgram::addUniformVariable(const OSG::Char8*, const OSG::Vec3f&);
template bool OSG::ShaderProgram::addUniformVariable(const OSG::Char8*, const OSG::Vec4f&);
template bool OSG::ShaderProgram::addUniformVariable(const OSG::Char8*, const OSG::Matrix&);
template bool OSG::ShaderProgram::addUniformVariable(const OSG::Char8*, const OSG::Pnt2f&);
template bool OSG::ShaderProgram::addUniformVariable(const OSG::Char8*, const OSG::Pnt3f&);
template bool OSG::ShaderProgram::updateUniformVariable(const OSG::Char8*, const bool&);
template bool OSG::ShaderProgram::updateUniformVariable(const OSG::Char8*, const OSG::Int32&);
template bool OSG::ShaderProgram::updateUniformVariable(const OSG::Char8*, const OSG::Real32&);
template bool OSG::ShaderProgram::updateUniformVariable(const OSG::Char8*, const OSG::Vec2f&);
template bool OSG::ShaderProgram::updateUniformVariable(const OSG::Char8*, const OSG::Vec3f&);
template bool OSG::ShaderProgram::updateUniformVariable(const OSG::Char8*, const OSG::Vec4f&);
template bool OSG::ShaderProgram::updateUniformVariable(const OSG::Char8*, const OSG::Matrix&);
template bool OSG::ShaderProgram::updateUniformVariable(const OSG::Char8*, const OSG::Pnt2f&);
template bool OSG::ShaderProgram::updateUniformVariable(const OSG::Char8*, const OSG::Pnt3f&);
template bool OSG::ShaderProgram::getUniformVariable(const OSG::Char8*, bool&);
template bool OSG::ShaderProgram::getUniformVariable(const OSG::Char8*, OSG::Int32&);
template bool OSG::ShaderProgram::getUniformVariable(const OSG::Char8*, OSG::Real32&);
template bool OSG::ShaderProgram::getUniformVariable(const OSG::Char8*, OSG::Vec2f&);
template bool OSG::ShaderProgram::getUniformVariable(const OSG::Char8*, OSG::Vec3f&);
template bool OSG::ShaderProgram::getUniformVariable(const OSG::Char8*, OSG::Vec4f&);
template bool OSG::ShaderProgram::getUniformVariable(const OSG::Char8*, OSG::Matrix&);
template bool OSG::ShaderProgram::getUniformVariable(const OSG::Char8*, OSG::Pnt2f&);
template bool OSG::ShaderProgram::getUniformVariable(const OSG::Char8*, OSG::Pnt3f&);
template bool OSG::SimpleSHLVariableChunk::addUniformVariable(const OSG::Char8*, const bool&);
template bool OSG::SimpleSHLVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Int32&);
template bool OSG::SimpleSHLVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Real32&);
template bool OSG::SimpleSHLVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Vec2f&);
template bool OSG::SimpleSHLVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Vec3f&);
template bool OSG::SimpleSHLVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Vec4f&);
template bool OSG::SimpleSHLVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Matrix&);
template bool OSG::SimpleSHLVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Pnt2f&);
template bool OSG::SimpleSHLVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Pnt3f&);
template bool OSG::SimpleSHLVariableChunk::updateUniformVariable(const OSG::Char8*, const bool&);
template bool OSG::SimpleSHLVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Int32&);
template bool OSG::SimpleSHLVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Real32&);
template bool OSG::SimpleSHLVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Vec2f&);
template bool OSG::SimpleSHLVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Vec3f&);
template bool OSG::SimpleSHLVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Vec4f&);
template bool OSG::SimpleSHLVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Matrix&);
template bool OSG::SimpleSHLVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Pnt2f&);
template bool OSG::SimpleSHLVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Pnt3f&);
template bool OSG::SimpleSHLVariableChunk::getUniformVariable(const OSG::Char8*, bool&);
template bool OSG::SimpleSHLVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Int32&);
template bool OSG::SimpleSHLVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Real32&);
template bool OSG::SimpleSHLVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Vec2f&);
template bool OSG::SimpleSHLVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Vec3f&);
template bool OSG::SimpleSHLVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Vec4f&);
template bool OSG::SimpleSHLVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Matrix&);
template bool OSG::SimpleSHLVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Pnt2f&);
template bool OSG::SimpleSHLVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Pnt3f&);
template bool OSG::SimpleSHLChunk::addUniformVariable(const OSG::Char8*, const bool&);
template bool OSG::SimpleSHLChunk::addUniformVariable(const OSG::Char8*, const OSG::Int32&);
template bool OSG::SimpleSHLChunk::addUniformVariable(const OSG::Char8*, const OSG::Real32&);
template bool OSG::SimpleSHLChunk::addUniformVariable(const OSG::Char8*, const OSG::Vec2f&);
template bool OSG::SimpleSHLChunk::addUniformVariable(const OSG::Char8*, const OSG::Vec3f&);
template bool OSG::SimpleSHLChunk::addUniformVariable(const OSG::Char8*, const OSG::Vec4f&);
template bool OSG::SimpleSHLChunk::addUniformVariable(const OSG::Char8*, const OSG::Matrix&);
template bool OSG::SimpleSHLChunk::addUniformVariable(const OSG::Char8*, const OSG::Pnt2f&);
template bool OSG::SimpleSHLChunk::addUniformVariable(const OSG::Char8*, const OSG::Pnt3f&);
template bool OSG::SimpleSHLChunk::updateUniformVariable(const OSG::Char8*, const bool&);
template bool OSG::SimpleSHLChunk::updateUniformVariable(const OSG::Char8*, const OSG::Int32&);
template bool OSG::SimpleSHLChunk::updateUniformVariable(const OSG::Char8*, const OSG::Real32&);
template bool OSG::SimpleSHLChunk::updateUniformVariable(const OSG::Char8*, const OSG::Vec2f&);
template bool OSG::SimpleSHLChunk::updateUniformVariable(const OSG::Char8*, const OSG::Vec3f&);
template bool OSG::SimpleSHLChunk::updateUniformVariable(const OSG::Char8*, const OSG::Vec4f&);
template bool OSG::SimpleSHLChunk::updateUniformVariable(const OSG::Char8*, const OSG::Matrix&);
template bool OSG::SimpleSHLChunk::updateUniformVariable(const OSG::Char8*, const OSG::Pnt2f&);
template bool OSG::SimpleSHLChunk::updateUniformVariable(const OSG::Char8*, const OSG::Pnt3f&);
template bool OSG::SimpleSHLChunk::getUniformVariable(const OSG::Char8*, bool&);
template bool OSG::SimpleSHLChunk::getUniformVariable(const OSG::Char8*, OSG::Int32&);
template bool OSG::SimpleSHLChunk::getUniformVariable(const OSG::Char8*, OSG::Real32&);
template bool OSG::SimpleSHLChunk::getUniformVariable(const OSG::Char8*, OSG::Vec2f&);
template bool OSG::SimpleSHLChunk::getUniformVariable(const OSG::Char8*, OSG::Vec3f&);
template bool OSG::SimpleSHLChunk::getUniformVariable(const OSG::Char8*, OSG::Vec4f&);
template bool OSG::SimpleSHLChunk::getUniformVariable(const OSG::Char8*, OSG::Matrix&);
template bool OSG::SimpleSHLChunk::getUniformVariable(const OSG::Char8*, OSG::Pnt2f&);
template bool OSG::SimpleSHLChunk::getUniformVariable(const OSG::Char8*, OSG::Pnt3f&);
template bool OSG::ShaderProgramVariableChunk::addUniformVariable(const OSG::Char8*, const bool&);
template bool OSG::ShaderProgramVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Int32&);
template bool OSG::ShaderProgramVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Real32&);
template bool OSG::ShaderProgramVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Vec2f&);
template bool OSG::ShaderProgramVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Vec3f&);
template bool OSG::ShaderProgramVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Vec4f&);
template bool OSG::ShaderProgramVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Matrix&);
template bool OSG::ShaderProgramVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Pnt2f&);
template bool OSG::ShaderProgramVariableChunk::addUniformVariable(const OSG::Char8*, const OSG::Pnt3f&);
template bool OSG::ShaderProgramVariableChunk::updateUniformVariable(const OSG::Char8*, const bool&);
template bool OSG::ShaderProgramVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Int32&);
template bool OSG::ShaderProgramVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Real32&);
template bool OSG::ShaderProgramVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Vec2f&);
template bool OSG::ShaderProgramVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Vec3f&);
template bool OSG::ShaderProgramVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Vec4f&);
template bool OSG::ShaderProgramVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Matrix&);
template bool OSG::ShaderProgramVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Pnt2f&);
template bool OSG::ShaderProgramVariableChunk::updateUniformVariable(const OSG::Char8*, const OSG::Pnt3f&);
template bool OSG::ShaderProgramVariableChunk::getUniformVariable(const OSG::Char8*, bool&);
template bool OSG::ShaderProgramVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Int32&);
template bool OSG::ShaderProgramVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Real32&);
template bool OSG::ShaderProgramVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Vec2f&);
template bool OSG::ShaderProgramVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Vec3f&);
template bool OSG::ShaderProgramVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Vec4f&);
template bool OSG::ShaderProgramVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Matrix&);
template bool OSG::ShaderProgramVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Pnt2f&);
template bool OSG::ShaderProgramVariableChunk::getUniformVariable(const OSG::Char8*, OSG::Pnt3f&);
template OSG::Vec2f OSG::GeoVectorProperty::getValue<OSG::Vec2f>(const OSG::SizeT) const;
template OSG::Vec3f OSG::GeoVectorProperty::getValue<OSG::Vec3f>(const OSG::SizeT) const;
template OSG::Vec4f OSG::GeoVectorProperty::getValue<OSG::Vec4f>(const OSG::SizeT) const;
template OSG::Vec2d OSG::GeoVectorProperty::getValue<OSG::Vec2d>(const OSG::SizeT) const;
template OSG::Vec3d OSG::GeoVectorProperty::getValue<OSG::Vec3d>(const OSG::SizeT) const;
template OSG::Vec4d OSG::GeoVectorProperty::getValue<OSG::Vec4d>(const OSG::SizeT) const;
template OSG::Vec2ub OSG::GeoVectorProperty::getValue<OSG::Vec2ub>(const OSG::SizeT) const;
template OSG::Vec3ub OSG::GeoVectorProperty::getValue<OSG::Vec3ub>(const OSG::SizeT) const;
template OSG::Vec4ub OSG::GeoVectorProperty::getValue<OSG::Vec4ub>(const OSG::SizeT) const;
template OSG::Pnt2f OSG::GeoVectorProperty::getValue<OSG::Pnt2f>(const OSG::SizeT) const;
template OSG::Pnt3f OSG::GeoVectorProperty::getValue<OSG::Pnt3f>(const OSG::SizeT) const;
template OSG::Pnt4f OSG::GeoVectorProperty::getValue<OSG::Pnt4f>(const OSG::SizeT) const;
template OSG::Pnt2d OSG::GeoVectorProperty::getValue<OSG::Pnt2d>(const OSG::SizeT) const;
template OSG::Pnt3d OSG::GeoVectorProperty::getValue<OSG::Pnt3d>(const OSG::SizeT) const;
template OSG::Pnt4d OSG::GeoVectorProperty::getValue<OSG::Pnt4d>(const OSG::SizeT) const;
template OSG::Color3f OSG::GeoVectorProperty::getValue<OSG::Color3f>(const OSG::SizeT) const;
template OSG::Color4f OSG::GeoVectorProperty::getValue<OSG::Color4f>(const OSG::SizeT) const;
template void OSG::GeoVectorProperty::setValue<OSG::Vec2f>(const OSG::Vec2f&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Vec3f>(const OSG::Vec3f&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Vec4f>(const OSG::Vec4f&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Vec2d>(const OSG::Vec2d&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Vec3d>(const OSG::Vec3d&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Vec4d>(const OSG::Vec4d&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Vec2ub>(const OSG::Vec2ub&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Vec3ub>(const OSG::Vec3ub&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Vec4ub>(const OSG::Vec4ub&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Pnt2f>(const OSG::Pnt2f&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Pnt3f>(const OSG::Pnt3f&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Pnt4f>(const OSG::Pnt4f&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Pnt2d>(const OSG::Pnt2d&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Pnt3d>(const OSG::Pnt3d&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Pnt4d>(const OSG::Pnt4d&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Color3f>(const OSG::Color3f&, const OSG::SizeT);
template void OSG::GeoVectorProperty::setValue<OSG::Color4f>(const OSG::Color4f&, const OSG::SizeT);
template void OSG::GeoVectorProperty::addValue<OSG::Vec2f>(const OSG::Vec2f&);
template void OSG::GeoVectorProperty::addValue<OSG::Vec3f>(const OSG::Vec3f&);
template void OSG::GeoVectorProperty::addValue<OSG::Vec4f>(const OSG::Vec4f&);
template void OSG::GeoVectorProperty::addValue<OSG::Vec2d>(const OSG::Vec2d&);
template void OSG::GeoVectorProperty::addValue<OSG::Vec3d>(const OSG::Vec3d&);
template void OSG::GeoVectorProperty::addValue<OSG::Vec4d>(const OSG::Vec4d&);
template void OSG::GeoVectorProperty::addValue<OSG::Vec2ub>(const OSG::Vec2ub&);
template void OSG::GeoVectorProperty::addValue<OSG::Vec3ub>(const OSG::Vec3ub&);
template void OSG::GeoVectorProperty::addValue<OSG::Vec4ub>(const OSG::Vec4ub&);
template void OSG::GeoVectorProperty::addValue<OSG::Pnt2f>(const OSG::Pnt2f&);
template void OSG::GeoVectorProperty::addValue<OSG::Pnt3f>(const OSG::Pnt3f&);
template void OSG::GeoVectorProperty::addValue<OSG::Pnt4f>(const OSG::Pnt4f&);
template void OSG::GeoVectorProperty::addValue<OSG::Pnt2d>(const OSG::Pnt2d&);
template void OSG::GeoVectorProperty::addValue<OSG::Pnt3d>(const OSG::Pnt3d&);
template void OSG::GeoVectorProperty::addValue<OSG::Pnt4d>(const OSG::Pnt4d&);
template void OSG::GeoVectorProperty::addValue<OSG::Color3f>(const OSG::Color3f&);
template void OSG::GeoVectorProperty::addValue<OSG::Color4f>(const OSG::Color4f&);
template void OSG::GeoVectorProperty::push_back<OSG::Vec2f>(const OSG::Vec2f&);
template void OSG::GeoVectorProperty::push_back<OSG::Vec3f>(const OSG::Vec3f&);
template void OSG::GeoVectorProperty::push_back<OSG::Vec4f>(const OSG::Vec4f&);
template void OSG::GeoVectorProperty::push_back<OSG::Vec2d>(const OSG::Vec2d&);
template void OSG::GeoVectorProperty::push_back<OSG::Vec3d>(const OSG::Vec3d&);
template void OSG::GeoVectorProperty::push_back<OSG::Vec4d>(const OSG::Vec4d&);
template void OSG::GeoVectorProperty::push_back<OSG::Vec2ub>(const OSG::Vec2ub&);
template void OSG::GeoVectorProperty::push_back<OSG::Vec3ub>(const OSG::Vec3ub&);
template void OSG::GeoVectorProperty::push_back<OSG::Vec4ub>(const OSG::Vec4ub&);
template void OSG::GeoVectorProperty::push_back<OSG::Pnt2f>(const OSG::Pnt2f&);
template void OSG::GeoVectorProperty::push_back<OSG::Pnt3f>(const OSG::Pnt3f&);
template void OSG::GeoVectorProperty::push_back<OSG::Pnt4f>(const OSG::Pnt4f&);
template void OSG::GeoVectorProperty::push_back<OSG::Pnt2d>(const OSG::Pnt2d&);
template void OSG::GeoVectorProperty::push_back<OSG::Pnt3d>(const OSG::Pnt3d&);
template void OSG::GeoVectorProperty::push_back<OSG::Pnt4d>(const OSG::Pnt4d&);
template void OSG::GeoVectorProperty::push_back<OSG::Color3f>(const OSG::Color3f&);
template void OSG::GeoVectorProperty::push_back<OSG::Color4f>(const OSG::Color4f&);
template OSG::RenderTreeNode* OSG::RenderTreeNodePool::create<OSG::RenderTreeNode>();
template OSG::RenderTreeNode* OSG::RenderTreeNodePool::create<OSG::RenderTreeNode>(OSG::UInt32);
#endif


