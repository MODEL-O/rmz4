// undefined FUN_08069770(void)
// entry 0x8069770


undefined4 FUN_08069770(int param_1)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 0xb4);
  uVar5 = *(undefined4 *)(param_1 + 0xb8);
  uVar3 = *(undefined4 *)(param_1 + 0xbc);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(*(int *)(param_1 + 0xc0) + 10) = *(byte *)(*(int *)(param_1 + 0xc0) + 10) & 0xfe;
    puVar2 = DAT_080697e8;
    FUN_0801cf00(uVar4,*DAT_080697e8);
    FUN_0801cf00(uVar5,puVar2[4]);
    FUN_0801cf00(uVar3,puVar2[0xc]);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(uVar4);
  FUN_0801cff0(uVar5);
  FUN_0801cff0(uVar3);
  bVar1 = *(byte *)(DAT_080697ec + 0x12) & 1;
  if ((*(byte *)(DAT_080697ec + 0x12) & 1) == 0) {
    *(byte *)(param_1 + 0xd) = bVar1;
    *(byte *)(param_1 + 0xe) = bVar1;
    *(byte *)(param_1 + 0xf) = bVar1;
  }
  return in_lr;
}


