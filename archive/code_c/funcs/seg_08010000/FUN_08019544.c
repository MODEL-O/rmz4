// undefined FUN_08019544(void)
// entry 0x8019544


undefined4 FUN_08019544(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(short *)(DAT_080195e8 + 0x1c2) = (short)DAT_080195ec;
    *(undefined2 *)(DAT_080195f0 + 0x1c2) = 9;
    iVar2 = DAT_08019698;
    iVar1 = DAT_080195f4;
    if (*(int *)(param_1 + 0x34) < 0xca1) {
      if (*(int *)(param_1 + 0x34) < 0x5a1) {
        uVar3 = FUN_080f83fc(DAT_08019698,1,1);
        *(undefined4 *)(param_1 + 0x68) = uVar3;
        uVar3 = FUN_080f83fc(iVar2 + 8,1,1);
        *(undefined4 *)(param_1 + 0x6c) = uVar3;
        uVar3 = FUN_080f83fc(iVar2 + 0x10,1,1);
        *(undefined4 *)(param_1 + 0x70) = uVar3;
        uVar3 = FUN_080f83fc(iVar2 + 0x18,1,1);
        *(undefined4 *)(param_1 + 0x74) = uVar3;
      }
      else {
        FUN_08002b10(0x74);
        iVar1 = DAT_08019650;
        uVar3 = FUN_080f83fc(DAT_08019650,0,1);
        *(undefined4 *)(param_1 + 0x68) = uVar3;
        uVar3 = FUN_080f83fc(iVar1 + 8,0,1);
        *(undefined4 *)(param_1 + 0x6c) = uVar3;
        uVar3 = FUN_080f83fc(iVar1 + 0x10,1,1);
        *(undefined4 *)(param_1 + 0x70) = uVar3;
        uVar3 = FUN_080f83fc(iVar1 + 0x18,0,1);
        *(undefined4 *)(param_1 + 0x74) = uVar3;
        uVar3 = FUN_080f83fc(iVar1 + 0x20,0,1);
        *(undefined4 *)(param_1 + 0x78) = uVar3;
      }
    }
    else {
      uVar3 = FUN_080f83fc(DAT_080195f4,2,1);
      *(undefined4 *)(param_1 + 0x68) = uVar3;
      uVar3 = FUN_080f83fc(iVar1 + 8,2,1);
      *(undefined4 *)(param_1 + 0x6c) = uVar3;
      uVar3 = FUN_080f83fc(iVar1 + 0x10,2,1);
      *(undefined4 *)(param_1 + 0x70) = uVar3;
      uVar3 = FUN_080f83fc(iVar1 + 0x18,2,1);
      *(undefined4 *)(param_1 + 0x74) = uVar3;
      uVar3 = FUN_080f83fc(iVar1 + 0x20,2,1);
      *(undefined4 *)(param_1 + 0x78) = uVar3;
      uVar3 = FUN_080f83fc(iVar1 + 0x28,2,1);
      *(undefined4 *)(param_1 + 0x7c) = uVar3;
      uVar3 = FUN_080f83fc(iVar1 + 0x30,2,1);
      *(undefined4 *)(param_1 + 0x80) = uVar3;
      uVar3 = FUN_080f83fc(iVar1 + 0x38,2,1);
      *(undefined4 *)(param_1 + 0x84) = uVar3;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


