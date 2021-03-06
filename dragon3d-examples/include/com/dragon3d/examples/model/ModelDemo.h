/*
* Copyright 2013 the original author or authors.
* 
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
* 
*      http://www.apache.org/licenses/LICENSE-2.0
* 
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

/**********************************************************************
 * Author:      Owen Wu/wcw/yubing
 * Email:       yubing744@163.com
 * Created:     2014/03/22
 **********************************************************************/


#ifndef ModelDemo_Model_Examples_Dragon3d_Com_H
#define ModelDemo_Model_Examples_Dragon3d_Com_H

#include <dragon/config.h>
#include <com/dragon3d/framework/Application.h>
#include <com/dragon3d/scene/GameObject.h>

BeginPackage4(com, dragon3d, examples, model)

Import com::dragon3d::scene;
Import com::dragon3d::framework;

class_ ModelDemo extends(Application) {
public:
    static const Type* TYPE;
    
public:
    ModelDemo();
    virtual ~ModelDemo();

public:
    virtual void init();
    virtual void update(Scene* scene, ReadOnlyTimer* timer);
    virtual void destroy();
    
protected:
    GameObject* myBox;
    GameObject* mainCamera;
    GameObject* child;
    
};//ModelDemo

EndPackage4 //(com, dragon3d, examples, model)

#endif //ModelDemo_Model_Examples_Dragon3d_Com_H
