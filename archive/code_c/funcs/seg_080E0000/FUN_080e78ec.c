// undefined FUN_080e78ec(void)
// entry 0x80e78ec


undefined4 FUN_080e78ec(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  short asStack_10 [4];
  
  FUN_08129258(asStack_10,DAT_080e7940,8);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 100) + (int)asStack_10[*(uint *)(param_1 + 0x74) & 3];
  FUN_0801cff0(param_1);
  iVar1 = *(int *)(param_1 + 0x74) + -1;
  *(int *)(param_1 + 0x74) = iVar1;
  if (iVar1 == 0) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e7944);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080e7948(param_1);
  }
  return in_lr;
}


