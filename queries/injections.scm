((body_json (text_block (text) @injection.content))
 (#set! injection.language "json"))

((body_xml (text_block (text) @injection.content))
 (#set! injection.language "xml"))

((body_sparql (text_block (text) @injection.content))
 (#set! injection.language "sparql"))

((body_graphql (text_block (text) @injection.content))
 (#set! injection.language "graphql"))

((body_graphql_vars (text_block (text) @injection.content))
 (#set! injection.language "json"))

((tests (text_block (text) @injection.content))
 (#set! injection.language "javascript"))

((script_pre_request (text_block (text) @injection.content))
 (#set! injection.language "javascript"))

((script_post_response (text_block (text) @injection.content))
 (#set! injection.language "javascript"))

((docs (text_block (text) @injection.content))
 (#set! injection.language "markdown"))
