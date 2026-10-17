// undefined FUN_08044660(void)
// entry 0x8044660


undefined8 FUN_08044660(int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_080446ac);
  iVar2 = DAT_080446fc;
  iVar1 = DAT_080446b0;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x15;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x54);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_080446b4;
      uVar3 = *DAT_080446b8;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x15;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x54);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_08044700 + 2);
      uVar3 = *(undefined1 *)(DAT_08044704 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(int *)(iVar4 + 0x28) = param_1;
    *(undefined1 *)(iVar4 + 0x10) = param_2;
    *(undefined1 *)(iVar4 + 0x11) = param_3;
    *(undefined1 *)(param_1 + DAT_08044708) = 0;
  }
  return CONCAT44(in_lr,iVar4);
}


