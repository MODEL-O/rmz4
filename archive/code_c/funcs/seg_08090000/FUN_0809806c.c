// undefined FUN_0809806c(void)
// entry 0x809806c


undefined4 FUN_0809806c(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = DAT_08098134;
  local_20 = *(undefined4 *)(param_1 + 0x54);
  local_1c = *(undefined4 *)(param_1 + 0x58);
  uVar3 = DAT_0809813c * *DAT_08098138 + DAT_08098140;
  *DAT_08098138 = uVar3 & 0x7fffffff;
  pbVar4 = (byte *)(param_1 + 0xbc);
  FUN_080d4c8c(&local_20,iVar1,0,((uVar3 & 0x7fffffff) >> 0x10 & 1) << 4 | (uint)*pbVar4);
  FUN_080d4c8c(&local_20,iVar1 + 0x1c,0,*pbVar4);
  FUN_080d4c8c(&local_20,iVar1 + 0x1c,0,*pbVar4 | 0x10);
  FUN_080d4c8c(&local_20,iVar1 + 0x38,0,*pbVar4 | 0x10);
  FUN_080d0c88(1,&local_20);
  FUN_08002b10(0x2a);
  FUN_0802ab88(2,0x32,param_1 + 0x54);
  if (*(ushort *)(DAT_08098144 + 0xc) <= DAT_08098148) {
    *(ushort *)(DAT_08098144 + 0xc) = *(ushort *)(DAT_08098144 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809814c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


