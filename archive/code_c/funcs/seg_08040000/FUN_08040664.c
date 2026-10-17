// undefined FUN_08040664(void)
// entry 0x8040664


undefined4 FUN_08040664(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_080406c4);
  if (iVar3 == 0) {
    return in_lr;
  }
  *(undefined1 *)(iVar3 + 0x11) = param_2;
  iVar2 = DAT_08040730;
  iVar1 = DAT_080406c8;
  if (*(char *)(param_1 + 0xf8) == '\x02') {
    *(undefined1 *)(iVar3 + 9) = 9;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar1 + 0x24);
    *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0xbf;
    *(undefined1 *)(iVar3 + 0x25) = 0x10;
    *(undefined2 *)(iVar3 + 0x20) = *DAT_080406cc;
    *(undefined1 *)(iVar3 + 0x22) = *DAT_080406d0;
    if (*(char *)(iVar3 + 0x11) == '\0') goto LAB_08040724;
    FUN_0803a8d4(0,0,1);
  }
  else {
    *(undefined1 *)(iVar3 + 9) = 9;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar2 + 0x24);
    *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0xbf;
    *(undefined1 *)(iVar3 + 0x25) = 0x10;
    *(undefined2 *)(iVar3 + 0x20) = *(undefined2 *)(DAT_08040734 + 2);
    *(undefined1 *)(iVar3 + 0x22) = *(undefined1 *)(DAT_08040738 + 1);
    if (*(char *)(iVar3 + 0x11) == '\0') goto LAB_08040724;
    FUN_0803a8d4(1,0,1);
  }
  if (*(char *)(iVar3 + 0x11) != '\0') {
    *(short *)(param_1 + 0x15a) = (short)DAT_0804073c;
    FUN_0803a964(DAT_08040740);
  }
LAB_08040724:
  *(int *)(iVar3 + 0x28) = param_1;
  *(undefined1 *)(iVar3 + 0x10) = 0;
  return in_lr;
}


