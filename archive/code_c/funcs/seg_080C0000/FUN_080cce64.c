// undefined FUN_080cce64(void)
// entry 0x80cce64


undefined4 FUN_080cce64(int param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar1 = DAT_080ccefc;
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      uVar2 = *(uint *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080ccefc);
      pbVar3 = (byte *)((uVar2 >> 3) + DAT_080ccef8 + 4);
      *pbVar3 = (byte)(1 << (uVar2 & 7)) | *pbVar3;
      uVar2 = *(uint *)((uint)*(byte *)(param_1 + 0x10) * 4 + iVar1);
      pbVar3 = (byte *)((uVar2 >> 3) + DAT_080ccf00);
      *pbVar3 = (byte)(1 << (uVar2 & 7)) | *pbVar3;
      FUN_0801cf00(param_1,DAT_080ccf04);
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
      *(undefined4 *)(param_1 + 100) = 300;
      FUN_08002b10(0x131);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    if ((*(uint *)(param_1 + 100) & 7) == 0) {
      FUN_080d4c8c(param_1 + 0x54,DAT_080ccf30,0,0);
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  }
  return in_lr;
}


