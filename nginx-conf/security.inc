add_header X-Frame-Options "SAMEORIGIN" always;
add_header X-XSS-Protection "1; mode=block" always;
add_header X-Content-Type-Options "nosniff" always;
# add_header Referrer-Policy "no-referrer-when-downgrade" always;
# add_header Strict-Transport-Security "max-age=31536000; includeSubDomains; preload" always;
# enable strict transport security only if you understand the implications
# add_header Content-Security-Policy "default-src 'none'; script-src 'none'; connect-src 'none'; img-src 'none'; style-src 'none'; frame-ancestors 'none'; form-action 'none'; upgrade-insecure-requests;" always;
#add_header Content-Security-Policy "default-src 'self'; font-src *;img-src * data:; script-src *; style-src *";
#add_header Permissions-Policy "geolocation=(),midi=(),sync-xhr=(),microphone=(),camera=(),magnetometer=(),gyroscope=(),fullscreen=(self),payment=()";
