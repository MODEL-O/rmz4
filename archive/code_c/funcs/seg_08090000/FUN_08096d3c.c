// undefined FUN_08096d3c(void)
// entry 0x8096d3c


undefined4 FUN_08096d3c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if (((*(char *)(iVar3 + 0xd) == '\0') && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0)) &&
     (cVar1 = FUN_0803a578(*DAT_08096d84,5,1), cVar1 != '\0')) {
    *(undefined1 *)(iVar3 + 0x13) = 1;
    piVar2 = (int *)((uint)*(byte *)(iVar3 + 9) * 4 + DAT_08096d88);
    *(undefined4 *)(iVar3 + 0xc) = 2;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


