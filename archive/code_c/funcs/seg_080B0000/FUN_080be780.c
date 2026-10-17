// undefined FUN_080be780(void)
// entry 0x80be780


undefined8 FUN_080be780(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080be7d4);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080be7d8;
    *(undefined1 *)(iVar2 + 9) = 5;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x14);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0xb4) = param_1;
    *(undefined4 *)(iVar2 + 0x28) = param_2;
    uVar3 = param_3[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_3;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = 1;
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


