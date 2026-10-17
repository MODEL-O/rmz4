// undefined FUN_0809a938(void)
// entry 0x809a938


undefined4 FUN_0809a938(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (*(byte *)(iVar6 + 0xc) < 2) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      bVar1 = *(byte *)(iVar6 + 10) >> 4;
      bVar5 = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4c) = bVar5;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
      uVar4 = *(undefined4 *)(iVar6 + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined1 *)(param_1 + 0x12) = 0x40;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else {
      bVar1 = *(byte *)(iVar6 + 10) >> 4;
      bVar5 = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4c) = bVar5;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
      uVar4 = *(undefined4 *)(iVar6 + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == -1) {
        FUN_08099f0c(iVar6,5,0);
        FUN_08099f0c(iVar6,5,1);
        FUN_08099f0c(iVar6,5,2);
        FUN_08099f0c(iVar6,5,3);
        FUN_08099f0c(iVar6,5,4);
        FUN_08099f0c(iVar6,5,5);
        FUN_08099f0c(iVar6,5,6);
        FUN_08099f0c(iVar6,5,7);
        piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809aa98);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
        FUN_08099ff4(param_1);
      }
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809a980);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


