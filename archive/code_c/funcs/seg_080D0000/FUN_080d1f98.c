// undefined FUN_080d1f98(void)
// entry 0x80d1f98


undefined4 FUN_080d1f98(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cdbc();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0xb);
  *(undefined2 *)(param_1 + 0x50) = 0x110;
  *(undefined2 *)(param_1 + 0x52) = 0x110;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = 0x700;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = DAT_080d1fd4;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d2000);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080d1dd0(param_1);
  return in_lr;
}


