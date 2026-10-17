// undefined FUN_08017204(void)
// entry 0x8017204


undefined4 FUN_08017204(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0801722c;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    *(ushort *)(uVar2 * 2 + DAT_0801722c) = (ushort)*(undefined4 *)(param_1 + 100) | 0x47;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    FUN_08128be0(*DAT_08017268 + DAT_0801726c,
                 (*(ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_08017270) &
                 0x1f00) * 8 + 0x6000000,0x200);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}


