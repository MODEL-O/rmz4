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
    *(undefined1 *)(DAT_0800bfcc + DAT_0800bfd0) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if ((uint)(iVar3 + DAT_0800bfd4) < 0xef) {
    puVar5 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + DAT_0800bfd8);
    uVar1 = (ushort)DAT_0800bfdc & *puVar5;
    uVar4 = 1;
  }
  else {
    puVar5 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + DAT_0800c014);
    uVar1 = (ushort)DAT_0800c018 & *puVar5;
    uVar4 = 2;
  }
  *puVar5 = uVar1 | uVar4;
  if (((uint)(iVar3 + DAT_0800c01c) < 0x3f) && (*(int *)(param_1 + 0x38) <= DAT_0800c020)) {
    *(undefined1 *)(DAT_0800c024 + DAT_0800c028) = 1;
  }
  return;
}


