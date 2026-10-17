// undefined FUN_08007560(void)
// entry 0x8007560


void FUN_08007560(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  iVar1 = 0x02000ad0;
  puVar3 = (undefined4 *)(param_1 * 0x88 + 0x02000ad0);
  piVar4 = *(int **)(param_2 + 8);
  *(short *)(puVar3 + 3) = (short)param_1;
  *(undefined1 *)((int)puVar3 + 0xf) = 0;
  *(undefined1 *)((int)puVar3 + 0xe) = 0;
  *(undefined2 *)((int)puVar3 + 0x12) = 0;
  *(undefined2 *)(puVar3 + 4) = 0;
  uVar2 = 0x80000001;
  puVar3[0x10] = 0x80000001;
  puVar3[0xf] = uVar2;
  puVar3[0xe] = uVar2;
  puVar3[0xd] = uVar2;
  puVar3[0x16] = uVar2;
  puVar3[0x15] = uVar2;
  *puVar3 = 0;
  puVar3[1] = 1;
  puVar3[2] = 0;
  if (param_1 == 0) {
    FUN_080035f8(puVar3 + 5,puVar3 + 0xd,0x0002c004 + iVar1,*piVar4 + (int)piVar4,
                 piVar4[2] + (int)piVar4,*(undefined4 *)(param_2 + 0xc));
  }
  else {
    FUN_080035f8(puVar3 + 5,puVar3 + 0xd,
                 (*(ushort *)(((uint)puVar3[0x17] >> 4) * 2 + 0x02000a04) & 0x1f00) * 8 +
                 0x6000000,*piVar4 + (int)piVar4,piVar4[2] + (int)piVar4,
                 *(undefined4 *)(param_2 + 0xc + param_1 * 4));
  }
  return;
}


