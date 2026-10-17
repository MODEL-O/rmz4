// undefined FUN_080457a4(void)
// entry 0x80457a4


undefined4 FUN_080457a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_080457ec);
  iVar2 = DAT_08045840;
  iVar1 = DAT_080457f0;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x17;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x5c);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_080457f4;
      uVar3 = *DAT_080457f8;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x17;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x5c);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_08045844 + 2);
      uVar3 = *(undefined1 *)(DAT_08045848 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(int *)(iVar4 + 0x28) = param_2;
    *(int *)(iVar4 + 0x2c) = param_1;
    uVar5 = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(iVar4 + 0x58) = uVar5;
    *(undefined1 *)(iVar4 + 0x10) = 3;
    *(undefined1 *)(iVar4 + 0x11) = 0;
  }
  return in_lr;
}


