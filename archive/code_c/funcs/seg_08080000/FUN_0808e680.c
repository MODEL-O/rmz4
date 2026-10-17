// undefined FUN_0808e680(void)
// entry 0x808e680


undefined4 FUN_0808e680(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  FUN_0801cff0(param_1);
  iVar3 = *(int *)(iVar5 + 0x54);
  iVar4 = *(int *)(iVar5 + 0x58);
  iVar2 = *(int *)(*(int *)(iVar5 + 100) + 0x58);
  iVar6 = bVar1 + 2;
  iVar5 = FUN_08128fb8(iVar6 * (*(int *)(*(int *)(iVar5 + 100) + 0x54) - iVar3),6);
  *(int *)(param_1 + 0x54) = iVar5 + iVar3;
  iVar5 = FUN_08128fb8(iVar6 * (iVar2 - iVar4),6);
  *(int *)(param_1 + 0x58) = iVar5 + iVar4;
  return in_lr;
}


