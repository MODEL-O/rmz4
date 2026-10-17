// undefined FUN_08017e64(void)
// entry 0x8017e64


undefined4 FUN_08017e64(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_08017edc;
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar3 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_08017e88);
    *puVar3 = (ushort)DAT_08017e8c & *puVar3 | 3;
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar4 = *(uint *)(param_1 + 100);
    *(ushort *)(uVar2 * 2 + DAT_08017edc) = (ushort)uVar4 | 0x47;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    FUN_08128be0(*DAT_08017ee0 + DAT_08017ee4,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}


