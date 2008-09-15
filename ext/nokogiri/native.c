#include <native.h>

VALUE mNokogiri ;
VALUE mNokogiriXml ;
VALUE mNokogiriHtml ;
VALUE mNokogiriXslt ;
void Init_native()
{
  mNokogiri = rb_const_get(rb_cObject, rb_intern("Nokogiri"));
  mNokogiriXml = rb_const_get(mNokogiri, rb_intern("XML"));
  mNokogiriHtml = rb_const_get(mNokogiri, rb_intern("HTML"));
  mNokogiriXslt = rb_const_get(mNokogiri, rb_intern("XSLT"));

  init_xml_document();
  init_html_document();
  init_xml_node();
  init_xml_node_set();
  init_xml_xpath();
  init_xslt_stylesheet();
}
