// undefined FUN_08006808(void)
// entry 0x8006808


void FUN_08006808(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar3 = 0xff;
  iVar2 = FUN_08001594(5,0x3c);
  if (iVar2 != 0) {
    FUN_080016f0(5,0x02000a70,0x3c);
    pcVar1 = 0x02000790;
    do {
      FUN_080012ec(1);
      if (*pcVar1 == '\x01') {
        uVar3 = 0;
      }
      else {
        uVar3 = (uint)(byte)pcVar1[0x1e];
      }
    } while (uVar3 == 0);
  }
  iVar2 = 0x02000a70;
  if ((int)(uVar3 * 0x1000000) < 0) {
    local_14 = 0;
    FUN_08128be0(&local_14,0x02000a70,0x01000008);
    local_10 = 0;
    FUN_08128be4(&local_10,iVar2 + 0x20,0x05000007);
    FUN_08006a6c(0,0x96);
    FUN_08006a6c(1,0x96);
    FUN_08006a6c(2,200);
    FUN_08006a6c(3,0x000002ee);
    FUN_08006a6c(4,0x960);
    FUN_08006a6c(5,0x15e);
    FUN_08006a6c(6,200);
  }
  *(undefined1 *)(0x02000a70 + 0x38) = 0;
  return;
}


