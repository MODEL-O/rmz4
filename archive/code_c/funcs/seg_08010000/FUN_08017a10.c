// undefined FUN_08017a10(void)
// entry 0x8017a10


undefined4 FUN_08017a10(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (*(short *)(DAT_08017a9c + DAT_08017aa0) != 0) {
    puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + DAT_08017aac);
    FUN_08128be0(*DAT_08017aa4 + DAT_08017aa8,(*puVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    local_20[0] = 0;
    FUN_08128be0(local_20,(*puVar4 & 0x1f00) * 8 + DAT_08017ab0,0x1000200);
  }
  iVar1 = DAT_08017ab4;
  iVar3 = ((uVar2 & 0xffff) >> 4) * 4;
  *(short *)(iVar3 + DAT_08017ab4) = (short)*(undefined4 *)(param_1 + 0x34);
  *(short *)(iVar3 + iVar1 + 2) = (short)*(undefined4 *)(param_1 + 0x38) + (short)DAT_08017ab8;
  return in_lr;
}


