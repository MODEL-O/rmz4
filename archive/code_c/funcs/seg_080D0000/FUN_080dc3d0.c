// undefined FUN_080dc3d0(void)
// entry 0x80dc3d0


undefined4
FUN_080dc3d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080dc450);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080dc454;
    *(undefined1 *)(iVar2 + 9) = 0x2b;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xac);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined1 *)(iVar2 + 0x10) = 4;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined4 *)(iVar2 + 0x74) = param_5;
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    *(undefined4 *)(iVar2 + 0x58) = param_2[1];
    *(undefined4 *)(iVar2 + 0x5c) = *param_3;
    *(undefined4 *)(iVar2 + 0x60) = param_3[1];
    *(undefined4 *)(iVar2 + 0x68) = param_4;
    *(undefined1 *)(iVar2 + 0x12) = param_6;
    *(undefined1 *)(iVar2 + 0x78) = 1;
    *(undefined1 *)(iVar2 + 0x79) = 0;
  }
  return in_lr;
}


