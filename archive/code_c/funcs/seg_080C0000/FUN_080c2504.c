// undefined FUN_080c2504(void)
// entry 0x80c2504


undefined4 FUN_080c2504(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c2574);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  *(undefined1 *)(param_1 + 0xbe) = 0x10;
  *(undefined1 *)(param_1 + 0xbc) = 0x40;
  iVar3 = (*(int *)(*(int *)(param_1 + 0x28) + 0xb4) -
          (*(int *)(*(int *)(param_1 + 0x28) + 0x58) + DAT_080c2578)) + DAT_080c257c;
  cVar1 = FUN_0810d338(DAT_080c2578,iVar3);
  *(char *)(param_1 + 0xbd) = cVar1 + -0x40;
  *(int *)(param_1 + 0xc0) = iVar3;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_080c2628(param_1);
  return in_lr;
}


