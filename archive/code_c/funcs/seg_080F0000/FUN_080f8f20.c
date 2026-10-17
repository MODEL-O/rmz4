// undefined FUN_080f8f20(void)
// entry 0x80f8f20


undefined8 FUN_080f8f20(int *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  uVar1 = FUN_080f872c();
  bVar2 = FUN_08129120(uVar1,3);
  if (bVar2 == 1) {
    param_1[1] = param_1[1] + 0x1000;
  }
  else if (bVar2 < 2) {
    if (bVar2 != 0) goto LAB_080f8f8c;
    param_1[1] = param_1[1] + DAT_080f8f5c;
  }
  else {
    if (bVar2 == 2) {
      iVar3 = *param_1;
      iVar4 = DAT_080f8f74;
    }
    else {
      if (bVar2 != 3) goto LAB_080f8f8c;
      iVar3 = *param_1;
      iVar4 = 0x1000;
    }
    *param_1 = iVar3 + iVar4;
  }
  uVar5 = FUN_080f872c(param_1);
  uVar5 = uVar5 & 0xff;
LAB_080f8f8c:
  return CONCAT44(in_lr,uVar5);
}


