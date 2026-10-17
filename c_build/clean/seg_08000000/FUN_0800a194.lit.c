// undefined FUN_0800a194(void)
// entry 0x800a194


void FUN_0800a194(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  iVar2 = 0x02000a04;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar7 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar6 = *(uint *)(param_1 + 100);
    *(ushort *)(uVar7 * 2 + 0x02000a04) = (ushort)uVar6 | 0x45;
    *(undefined4 *)(uVar7 * 4 + iVar2 + 8) = 0;
    FUN_08001f1c((*(int *)0x08b2c0a4) + 0x08b2c0ac,(uVar6 & 0x1f00) << 3,0x800);
    puVar3 = 0x02000a40;
    (*(undefined2 *)0x02000a40) = (short)0x00003b44;
    if (*(char *)(0x02000ab0 + 0x0002d024) == '\0') {
      uVar4 = (undefined2)0x00001010;
    }
    else {
      uVar4 = 0x1000;
    }
    puVar3[1] = uVar4;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar1 = *(ushort *)(param_1 + 0x10);
  if ((*(char *)(0x02000ab0 + 0x0002d024) != '\0') && ((uVar1 & 0x1f) == 0)) {
    if ((*(ushort *)(0x02000a40 + 2) & 0x1f) != 0) {
      *(ushort *)(0x02000a40 + 2) = (*(ushort *)(0x02000a40 + 2) & 0x1f) - 1 & 0x1f | 0x1000;
    }
  }
  *(ushort *)(param_1 + 0x10) = uVar1 - 1;
  sVar5 = *(short *)(param_1 + 0x12) + 1;
  *(short *)(param_1 + 0x12) = sVar5;
  if (sVar5 == 0x30) {
    *(undefined2 *)(param_1 + 0x12) = 0;
  }
  return;
}


