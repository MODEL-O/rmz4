// undefined FUN_080bcba8(void)
// entry 0x80bcba8


undefined4 FUN_080bcba8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 0x200) == 0) {
    if (*(char *)(param_1 + 0xb8) == '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      FUN_080bcd44(param_1);
      if ((*puVar4 & 4) != 0) {
        iVar3 = *(int *)(param_1 + 0x28) + DAT_080bcc1c;
        iVar2 = *(int *)(iVar3 + 0x14) + -0xb4;
        *(int *)(iVar3 + 0x14) = iVar2;
        if (iVar2 < 0) {
          *(undefined4 *)(iVar3 + 0x14) = 0;
        }
        FUN_08005784(param_1 + 0x74,DAT_080bcc20);
      }
    }
    else {
      *puVar4 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    }
    iVar2 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4);
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
    }
    if (0x11800 < iVar2) {
      piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bcc88);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    }
    FUN_0801cff0(param_1);
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bcbd8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080bcc8c(param_1);
  }
  return in_lr;
}


