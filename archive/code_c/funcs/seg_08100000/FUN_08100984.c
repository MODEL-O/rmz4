// undefined FUN_08100984(void)
// entry 0x8100984


undefined4 FUN_08100984(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *DAT_081009a8;
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xd) != '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined1 *)(iVar2 + 0xbe) = 0;
    }
    else {
      *(undefined1 *)(iVar2 + 0xbf) = 0;
    }
    FUN_080d57ac(0,0xff);
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081009dc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_081009e0(param_1);
  }
  return in_lr;
}


