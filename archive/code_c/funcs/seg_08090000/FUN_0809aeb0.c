// undefined FUN_0809aeb0(void)
// entry 0x809aeb0


undefined4 FUN_0809aeb0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) == '\x04') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809aed8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0809af04(param_1);
  }
  else {
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    iVar2 = FUN_08128fb8((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x5c),0x38);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
  }
  return in_lr;
}


