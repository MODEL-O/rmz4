// undefined FUN_080434e0(void)
// entry 0x80434e0


undefined4 FUN_080434e0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    *(bool *)(iVar3 + 0xbc) =
         *(int *)(iVar3 + 0x54) < *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    cVar1 = FUN_0803a578(*(undefined4 *)(iVar3 + 0x28),5,0);
    if (cVar1 != '\0') {
      *(undefined1 *)(iVar3 + 0xbd) = 0;
      piVar2 = (int *)((uint)*(byte *)(iVar3 + 9) * 4 + DAT_08043538);
      *(undefined4 *)(iVar3 + 0xc) = 2;
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    }
  }
  return in_lr;
}


