// undefined FUN_0810aca8(void)
// entry 0x810aca8


undefined4 FUN_0810aca8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if (*(char *)(param_1 + 0x7c) == '\0') {
    iVar2 = *(int *)(param_1 + 0x74);
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x78) == 0)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(int *)(param_1 + 0x54) = iVar2;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x78);
      if (0x100 < *DAT_0810ad1c) {
        *(int *)(param_1 + 0x54) = iVar2 + 0x20000;
      }
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810acdc);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  return in_lr;
}


