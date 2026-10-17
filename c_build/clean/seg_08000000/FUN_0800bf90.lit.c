// undefined FUN_0800bf90(void)
// entry 0x800bf90


void FUN_0800bf90(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(0x02000ab0 + 0x0002d02e) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if ((uint)(iVar3 + 0xfffff78f) < 0xef) {
    puVar5 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + 0x02000a04);
    uVar1 = (ushort)0x0000fffc & *puVar5;
    uVar4 = 1;
  }
  else {
    puVar5 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + 0x02000a04);
    uVar1 = (ushort)0x0000fffc & *puVar5;
    uVar4 = 2;
  }
  *puVar5 = uVar1 | uVar4;
  if (((uint)(iVar3 + 0xfffff79f) < 0x3f) && (*(int *)(param_1 + 0x38) <= 0x0000018f)) {
    *(undefined1 *)(0x02000ab0 + 0x0002d02e) = 1;
  }
  return;
}


