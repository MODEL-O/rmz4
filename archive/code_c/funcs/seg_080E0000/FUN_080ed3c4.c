// undefined FUN_080ed3c4(void)
// entry 0x80ed3c4


undefined8 FUN_080ed3c4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080ed418);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x1e;
    iVar1 = DAT_080ed41c;
    *(undefined1 *)(iVar2 + 9) = 0xd;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x34);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    uVar3 = param_2[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
  }
  return CONCAT44(in_lr,iVar2);
}


