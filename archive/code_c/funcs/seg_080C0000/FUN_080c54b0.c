// undefined FUN_080c54b0(void)
// entry 0x80c54b0


undefined8
FUN_080c54b0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080c550c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080c5510;
    *(undefined1 *)(iVar2 + 9) = 0x18;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x60);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    uVar3 = param_2[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = 2;
    *(undefined4 *)(iVar2 + 0xb4) = param_3;
    *(undefined1 *)(iVar2 + 0xb8) = param_4;
  }
  return CONCAT44(in_lr,iVar2);
}


