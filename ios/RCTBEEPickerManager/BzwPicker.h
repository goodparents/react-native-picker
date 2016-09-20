//
//  BzwPicker.h
//  PickerView
//
//  Created by Bao on 15/12/14.
//  Copyright © 2015年 Microlink. All rights reserved.
//

#import <UIKit/UIKit.h>

#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)


typedef void(^backBolock)(NSDictionary * );

@interface BzwPicker : UIView<UIPickerViewDataSource,UIPickerViewDelegate>

@property (strong,nonatomic)UIPickerView *pick;

@property(nonatomic,copy)backBolock bolock;

@property (strong, nonatomic) NSDictionary *pickerDic;//一开始进来的字典

@property (strong, nonatomic) NSArray *provinceArray;//省、市
@property (strong, nonatomic) NSArray *cityArray;//市，县
@property (strong, nonatomic) NSArray *townArray;//县，区


@property (strong, nonatomic) NSDictionary *selectedDic;//3级联动时候用到的
@property (strong,nonatomic)NSArray *selectArry;//2级联动时候用的

@property (strong,nonatomic)UIButton *leftBtn;//取消
@property (strong,nonatomic)UIButton *rightBtn;

@property(strong,nonatomic)NSString *leftStr;
@property(strong,nonatomic)NSString *centStr;
@property(strong,nonatomic)NSString *rightStr;


//用来判断进来的类型
@property(strong,nonatomic)id value;

@property(assign,nonatomic)BOOL Correlation;//判断有没有没有关联

@property(nonatomic,strong)NSString *numberCorrela;//关联是2行 还是3行

@property(nonatomic,strong)NSArray *noCorreArry;

//创建一个数组来传递返回的值
@property(nonatomic,strong)NSMutableArray *backArry;

@property(assign,nonatomic)BOOL noArryElementBool;

//创建一个数组 接收进来的选择Value

@property(strong,nonatomic)NSArray *selectValueArry;



-(instancetype)initWithFrame:(CGRect)frame dic:(NSDictionary *)dic leftStr:(NSString *)leftStr centerStr:(NSString *)centerStr rightStr:(NSString *)rightStr topbgColor:(NSArray *)topbgColor bottombgColor:(NSArray *)bottombgColor leftbtnbgColor:(NSArray *)leftbtnbgColor rightbtnbgColor:(NSArray *)rightbtnbgColor centerbtnColor:(NSArray *)centerbtnColor selectValueArry:(NSArray *)selectValueArry;


@end