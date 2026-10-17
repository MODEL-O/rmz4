// undefined FUN_0804f2e8(void)
// entry 0x804f2e8


undefined4 FUN_0804f2e8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    *(bool *)(iVar3 + 0xbc) =
         *(int *)(iVar3 + 0x54) < *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    cVar1 = FUN_0803a578(*(undefined4 *)(iVar3 + 0x28),5,0xe);
    if (cVar1 != '\0') {
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
      *(undefined4 *)(iVar3 + 0x8c) = 0;
      *(undefined4 *)(iVar3 + 0x90) = 0;
      *(undefined1 *)(iVar3 + 0x94) = 0;
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
      piVar2 = (int *)((uint)*(byte *)(iVar3 + 9) * 4 + DAT_0804f35c);
      *(undefined4 *)(iVar3 + 0xc) = 3;
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
    }
  }
  return in_lr;
}


