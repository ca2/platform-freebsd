//
// Created by camilo on 21/01/2021. <33TBS!!
//
//
// Created by camilo on 21/01/2021. <3-<3ThomasBS!!
//
#pragma once


namespace linux
{


   namespace acme
   {


      class CLASS_DECL_ACME_LINUX node :
         virtual public ::acme::node,
         virtual public ::acme::posix::node
      {
      public:


         ::file::path m_strTimeFolder;
         ::file::path m_strNetSeedFolder;

         ::file::path m_strCommonAppData;
         ::file::path m_strAppData;
         ::file::path m_strPrograms;
         ::file::path m_strCommonPrograms;


         node();

         virtual ~node();


         virtual ::e_status initialize_matter(::matter * pmatter) override;

         //virtual ::string dir_root() override;

         //virtual ::file::path get_memory_map_base_folder_path() const override;

         //virtual ::file::path home() override;

         //virtual ::file::path program_data() override;

         //virtual ::file::path roaming() override;


         virtual void install_crash_dump_reporting(const string & strModuleNameWithTheExeExtension) override;


         //virtual bool memcnts();

         //virtual ::file::path memcnts_base_path();

         //virtual ::e_status datetime_to_filetime(filetime_t * pFileTime, const ::datetime::time& time) override;


         //virtual ::e_status last_error_to_status(::u32 dwLastError);


         virtual string audio_get_default_library_name() override;


      };


   } // namespace acme


} // namespace node_linux



