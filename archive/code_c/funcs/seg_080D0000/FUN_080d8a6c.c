// undefined FUN_080d8a6c(void)
// entry 0x80d8a6c


undefined8
FUN_080d8a6c(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined1 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d8acc);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d8ad0;
    *(undefined1 *)(iVar2 + 9) = 0x1b;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x6c);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined1 *)(iVar2 + 0x10) = param_5;
    *(undefined1 *)(iVar2 + 0x11) = 1;
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = param_1[1];
    *(uint *)(iVar2 + 0x74) = param_3 & 0xffff;
    *(undefined4 *)(iVar2 + 0x78) = param_4;
  }
  return CONCAT44(in_lr,iVar2);
}


