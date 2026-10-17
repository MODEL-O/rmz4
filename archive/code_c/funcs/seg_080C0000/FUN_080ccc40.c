// undefined FUN_080ccc40(void)
// entry 0x80ccc40


undefined4 FUN_080ccc40(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    iVar3 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar3 + 0x54) +
         *(int *)(((int)-(*(byte *)(iVar3 + 10) & 0x10) >> 0x1f & 4U) + DAT_080ccc8c) * 0x100;
    *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + DAT_080ccc90;
    sVar1 = (ushort)*(byte *)(param_1 + 0x12) * 3 + 0x40;
    *(short *)(param_1 + 0x50) = sVar1;
    *(short *)(param_1 + 0x52) = sVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
    if (*(char *)(param_1 + 0xe) == '\0') {
      FUN_0801cf00(param_1,DAT_080cccfc);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  if ((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) || (*(char *)(param_1 + 0x12) == '\0')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ccd00);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


