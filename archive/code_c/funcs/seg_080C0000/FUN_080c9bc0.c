// undefined FUN_080c9bc0(void)
// entry 0x80c9bc0


undefined8 FUN_080c9bc0(undefined4 *param_1,char param_2,byte param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080c9c34);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080c9c38;
    *(undefined1 *)(iVar2 + 9) = 0x22;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x88);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(char *)(iVar2 + 0x10) = param_2;
    *(byte *)(iVar2 + 0x11) = param_3;
    *(undefined1 *)(iVar2 + 0xb7) = param_4;
    if (param_2 == '\0') {
      if (param_3 < 3) {
        uVar3 = FUN_080c9bc0(param_1,0,param_3 + 1,param_4);
        *(undefined4 *)(iVar2 + 0x2c) = uVar3;
      }
      else {
        *(undefined4 *)(iVar2 + 0x2c) = 0;
      }
    }
  }
  return CONCAT44(in_lr,iVar2);
}


