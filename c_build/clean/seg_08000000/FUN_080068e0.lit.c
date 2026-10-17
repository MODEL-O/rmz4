// undefined FUN_080068e0(void)
// entry 0x80068e0


undefined4 FUN_080068e0(void)

{
  undefined4 uVar1;
  uVar1 = 0;
  if ((((*(char *)(0x02000a70 + 0x12) == *(char *)(0x0812930c + 0x14)) ||
       ((ushort)*(byte *)(0x02000a70 + 0x13) == (*(ushort *)(0x0812930c + 0x16) & 0xff))) ||
      ((ushort)*(byte *)(0x02000a70 + 0x14) == (*(ushort *)(0x0812930c + 0x18) & 0xff))) ||
     ((((ushort)*(byte *)(0x02000a70 + 0x15) == (*(ushort *)(0x0812930c + 0x1a) & 0xff) ||
       ((ushort)*(byte *)(0x02000a70 + 0x16) == (*(ushort *)(0x0812930c + 0x1c) & 0xff))) ||
      (((ushort)*(byte *)(0x02000a70 + 0x17) == (*(ushort *)(0x0812930c + 0x1e) & 0xff) ||
       ((ushort)*(byte *)(0x02000a70 + 0x18) == (*(ushort *)(0x0812930c + 0x20) & 0xff))))))) {
    uVar1 = 1;
  }
  return uVar1;
}


