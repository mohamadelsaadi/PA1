#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
// variables
string url,protocol, domain, port, filePath;
	    int length;
	        
		    // user enters URL to be parsed
		        
			    cout << "Enter the URL: ";
			        cin >> url;
				    
				        // length of URL entered
					    
					        length = url.length();
						    
						        // char array to parse URL
							    
							        char inputUrl[length + 1];
								    
								        // url is put into the array
									    
									        strcpy(inputUrl, url.c_str());
										    
										        // strtok used to parse
											    
											        protocol = strtok(inputUrl, "://");
												    domain = strtok(NULL, ":");
												        port = strtok(NULL, "/");
													    filePath = strtok(NULL, " ");
													        
														    // components of the URL are displayed to the user
														        
															    if(protocol != "https" && protocol != "ftp" && protocol != "ftps")
															        {
																        cout << "Protocol: " << protocol << " is not a valid protocol." << endl;
																	    }
																	        else
																		    {
																		        cout << "Protocol: " << protocol << endl;
																			    cout << "Domain: " << domain << endl;
																			        cout << "Port: " << port << endl;
																				    cout << "File path: " << filePath << endl;
																				        }
																					}

